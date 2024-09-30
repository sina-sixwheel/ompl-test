#include <ompl/base/spaces/RealVectorStateSpace.h>
#include <ompl/base/SpaceInformation.h>
#include <boost/dynamic_bitset.hpp>
#include <iostream>

namespace my_ompl_lib {

class MyOMPLPlanner {
public:
    MyOMPLPlanner() {
        // Create a 3D state space
        auto space(std::make_shared<ompl::base::RealVectorStateSpace>(3));

        // Set the bounds for the R^3 space
        ompl::base::RealVectorBounds bounds(3);
        bounds.setLow(-1);
        bounds.setHigh(1);
        space->setBounds(bounds);

        // Create a SpaceInformation instance for the state space
        si_ = std::make_shared<ompl::base::SpaceInformation>(space);

        // Example usage of boost::dynamic_bitset
        boost::dynamic_bitset<> bitset(10);
        bitset[0] = 1;
        std::cout << "Bitset: " << bitset << std::endl;
    }

    void printSpaceDimension() {
        std::cout << "State space dimension: " << si_->getStateDimension() << std::endl;
    }

private:
    std::shared_ptr<ompl::base::SpaceInformation> si_;
};

}  // namespace my_ompl_lib